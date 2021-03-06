/*
 * 2miich - Liiga scores app
 * Copyright (C) 2014 Santtu Lakkala <inz@inz.fi>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "htmlrole.h"

HtmlRole::HtmlRole(QObject *parent) :
    QObject(parent)
{
}

HtmlRole::~HtmlRole()
{
}

QString HtmlRole::name() const
{
    return name_;
}

QString HtmlRole::query() const
{
    return query_;
}

void HtmlRole::setName(QString name)
{
    name_ = name;
}

void HtmlRole::setQuery(QString query)
{
    query_ = query;
}

QVariant HtmlRole::process(QVariant result)
{
    return result;
}
