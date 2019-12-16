CREATE TABLE pegawai (
	id_pegawai NUMBER(6,0),
	nama_depan VARCHAR2(20),
	nama_belakang VARCHAR2(20) CONSTRAINT peg_nama_blk_nn NOT NULL,
	email VARCHAR2(25) CONSTRAINT peg_email_nn NOT NULL,
	no_telepon VARCHAR(20),
	tanggal_diterima DATE CONSTRAINT peg_tgl_diterima_nn NOT NULL,
	id_pekerjaan VARCHAR2(10) CONSTRAINT peg_id_pekerjaan_nn NOT NULL,
	gaji NUMBER(8,2),
	komisi NUMBER(2,2),
	id_manager NUMBER(6,0),
	id_departemen NUMBER(4,0),
	BONUS VARCHAR2(5),
	CONSTRAINT peg_id_pegawai_pk PRIMARY KEY (id_pegawai)
)

CREATE TABLE departemen (
	id_departemen NUMBER(4,0),
	nama_departemen VARCHAR2(30) CONSTRAINT dep_nama_depart_nn NOT NULL,
	id_manager NUMBER(6,0),
	id_lokasi NUMBER(4,0),
	CONSTRAINT id_depat_pk PRIMARY KEY (id_departemen)	
);



CREATE TABLE pekerjaan (
	id_pekerjaan VARCHAR2(10),
	jabatan VARCHAR2(35) CONSTRAINT jabatan_nn NOT NULL,
	gaji_min NUMBER(6,0),
	gaji_max NUMBER(6,0),
	CONSTRAINT id_pekerjaan_pk PRIMARY KEY (id_pekerjaan)
);



CREATE TABLE riwayat_pekerjaan (
	id_pegawai NUMBER(6,0) CONSTRAINT riw_pegawai_nn NOT NULL,
	tanggal_mulai DATE CONSTRAINT riw_tgl_mulai_nn NOT NULL,
	tanggal_selesai DATE CONSTRAINT riw_tgl_selesai_nn NOT NULL,
	id_pekerjaan VARCHAR2(10) CONSTRAINT riw_pekerjaan_nn NOT NULL,
	id_departemen NUMBER(4,0),
	CONSTRAINT riw_id_peg_tgl_mulai_pk PRIMARY KEY (id_pegawai, tanggal_mulai)
)




CREATE TABLE lokasi (
	id_lokasi NUMBER(4,0),
	nama_jalan VARCHAR2(40),
	kode_pos VARCHAR2(12),
	kota VARCHAR2(30) CONSTRAINT kota_nn NOT NULL,
	provinsi VARCHAR2(25),
	id_negara char(2),
	CONSTRAINT id_lokasi_pk PRIMARY KEY (id_lokasi)
);




CREATE TABLE negara (
	id_negara char(2) CONSTRAINT id_negara_nn NOT NULL,
	nama_negara VARCHAR2(40), 
	id_daerah NUMBER,
	CONSTRAINT neg_id_negara_pk PRIMARY KEY (id_negara)
);



CREATE TABLE daerah (
	id_daerah NUMBER CONSTRAINT id_daerah_nn NOT NULL,
	nama_daerah VARCHAR2(25),
	CONSTRAINT id_daerah_pk PRIMARY KEY (id_daerah)
);


ALTER TABLE negara ADD CONSTRAINT wil_neg_fk FOREIGN KEY (id_daerah)
REFERENCES daerah (id_daerah);

ALTER TABLE lokasi ADD CONSTRAINT lok_id_fk FOREIGN KEY (id_negara)
REFERENCES negara (id_negara);

ALTER TABLE departemen ADD CONSTRAINT dep_lok_fk FOREIGN KEY (id_lokasi)
REFERENCES lokasi (id_lokasi);

ALTER TABLE pegawai ADD CONSTRAINT peg_dep_fk FOREIGN KEY (id_departemen)
REFERENCES departemen (id_departemen);

ALTER TABLE pegawai ADD CONSTRAINT peg_pekerjaan_fk FOREIGN KEY (id_pekerjaan)
REFERENCES pekerjaan (id_pekerjaan);

ALTER TABLE pegawai ADD CONSTRAINT peg_manager_fk FOREIGN KEY (id_manager)
REFERENCES pegawai (id_pegawai);

ALTER TABLE departemen ADD CONSTRAINT dep_mana_fk FOREIGN KEY (id_manager)
REFERENCES pegawai (id_pegawai) DISABLE;

ALTER TABLE riwayat_pekerjaan ADD CONSTRAINT ripek_dep_fk FOREIGN KEY (id_departemen)
REFERENCES departemen (id_departemen);

ALTER TABLE riwayat_pekerjaan ADD CONSTRAINT repek_peg_fk FOREIGN KEY (id_pegawai)
REFERENCES pegawai (id_pegawai) DISABLE;

ALTER TABLE riwayat_pekerjaan ADD CONSTRAINT ripek_pek_fk FOREIGN KEY (id_pekerjaan)
REFERENCES pekerjaan (id_pekerjaan);
 
================================================================================================


CREATE TABLE pelanggan (
	id_pelanggan NUMBER(6) NOT NULL,
	nama_depan_pelanggan VARCHAR2(30) NOT NULL,
	nama_belakang_pelanggan VARCHAR2(30) NOT NULL,
	alamat_pelanggan VARCHAR2(40),
	no_telepon VARCHAR2(30),
	bahasa_nls VARCHAR2(30),
	teritori_nls VARCHAR2(30),
	batas_kredit NUMBER(9,2),
	email_pelanggan VARCHAR2(40),
	id_akun_migrasi NUMBER(6),
	lokasi_geo_pelanggan NUMBER(12,5),
	tanggal_lahir DATE,
	status_perkawinan VARCHAR2(20),
	jenis_kelamin VARCHAR2(20),
	tingkat_pendapatan VARCHAR2(40),
	CONSTRAINT pelanggan_pk PRIMARY KEY (id_pelanggan)
)

CREATE TABLE inventaris (
	id_produk NUMBER(6),
	id_gudang NUMBER(3),
	jumlah_kuantitas NUMBER(8),
	CONSTRAINT inventaris_pk PRIMARY KEY (id_produk, id_gudang)
)

CREATE TABLE pesanan (
	id_pesanan NUMBER(12),
	tanggal_pemesanan DATE,
	mode_pesanan VARCHAR2(40),
	id_pelanggan NUMBER(6) NOT NULL,
	status_pesanan NUMBER(2),
	total_pesanan NUMBER(8,2),
	id_penjualan NUMBER(6),
	id_promosi NUMBER(6),
	CONSTRAINT pesanan_pk PRIMARY KEY (id_pesanan)
)

CREATE TABLE pesan_item (
	id_pesanan NUMBER(12) NOT NULL,
	id_urutan_item NUMBER(3) NOT NULL,
	id_produk NUMBER(6) Not NULL,
	harga_unit NUMBER(8,2),
	kuantitas NUMBER(8),
	CONSTRAINT psn_item_pk PRIMARY KEY (id_pesanan, id_urutan_item)
)

CREATE TABLE deskripsi_produk (
	id_produk NUMBER(6),
	id_bahasa VARCHAR2(6),
	nama_terjemahan VARCHAR2(40),
	deskripsi_terjemahan VARCHAR2(2000),
	CONSTRAINT prod_desc_pk PRIMARY KEY (id_produk, id_bahasa)
)

CREATE TABLE informasi_produk (
	id_produk NUMBER(6) NOT NULL,
	nama_produk VARCHAR2(40),
	deskripsi_produk VARCHAR2(2000),
	id_kategori NUMBER(2),
	kelas_berat NUMBER(1),
	masa_garansi VARCHAR2(40),
	id_suplier NUMBER(6),
	status_produk VARCHAR2(20),
	daftar_harga NUMBER(8,2),
	harga_min NUMBER(8,2),
	katalog_url VARCHAR2(50),
	CONSTRAINT prod_inf_pk PRIMARY KEY (id_produk)
)

CREATE TABLE gudang (
	id_gudang NUMBER(3) NOT NULL,
	spek_gudang VARCHAR2(50),
	nama_gudang VARCHAR2(40),
	id_lokasi NUMBER(4),
	lokasi_geografi NUMBER(10,5),
	CONSTRAINT gudang_pk PRIMARY KEY (id_gudang)
)

ALTER TABLE gudang ADD CONSTRAINT gudang_lokasi_fk FOREIGN KEY (id_lokasi)
REFERENCES lokasi (id_lokasi)

ALTER TABLE inventaris ADD CONSTRAINT inv_produk_fk FOREIGN KEY (id_produk)
REFERENCES informasi_produk (id_produk)

ALTER TABLE inventaris ADD CONSTRAINT inv_gudang_fk FOREIGN KEY (id_gudang)
REFERENCES gudang (id_gudang)

ALTER TABLE pesanan ADD CONSTRAINT pes_pel_fk FOREIGN KEY (id_pelanggan)
REFERENCES pelanggan (id_pelanggan)

ALTER TABLE pesan_item ADD CONSTRAINT pesan_pesanan_fk FOREIGN KEY (id_pesanan)
REFERENCES pesanan (id_pesanan)

ALTER TABLE pesan_item ADD CONSTRAINT pesan_item_pro_id FOREIGN KEY (id_produk)
REFERENCES informasi_produk (id_produk)

ALTER TABLE deskripsi_produk ADD CONSTRAINT des_pro_inf_pro_fk FOREIGN KEY (id_produk)
REFERENCES informasi_produk (id_produk)
