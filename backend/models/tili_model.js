const db = require('../database');

const Tili = {
  getAll: function(callback) {
    return db.query('select * from Tili', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Tili where idTili=?', [id], callback);
  },
  add: function(Tili, callback) {
    return db.query(
      'insert into Tili (TilinroDebit, SaldoDebit, TilinroCredit, SaldoCredit) values(?,?,?,?)',
      [Tili.TilinroDebit, Tili.SaldoDebit, Tili.TilinroCredit, Tili.SaldoCredit],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Tili where idTili=?', [id], callback);
  },
  update: function(id, Tili, callback) {
    return db.query(
      'update Tili set TilinroDebit=?, SaldoDebit=?, TilinroCredit=?, SaldoCredit=? where idTili=?',
      [Tili.TilinroDebit, Tili.SaldoDebit, Tili.TilinroCredit, Tili.SaldoCredit, id],
      callback
    );
  }
};
module.exports = Tili;