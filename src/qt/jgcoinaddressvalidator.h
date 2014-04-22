// Copyright (c) 2011-2014 The Jgcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef JGCOINADDRESSVALIDATOR_H
#define JGCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class JgcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JgcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Jgcoin address widget validator, checks for a valid jgcoin address.
 */
class JgcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JgcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // JGCOINADDRESSVALIDATOR_H
