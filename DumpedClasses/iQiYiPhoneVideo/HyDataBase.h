//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HyDataBase : NSObject
{
}

+ (id)strFromArray:(id)arg1;
+ (id)decodeDataWithData:(id)arg1;
+ (long long)getDataCount:(id)arg1 type:(id)arg2;
+ (long long)getDataCount:(id)arg1;
+ (_Bool)setData:(id)arg1 withKey:(id)arg2 type:(id)arg3;
+ (_Bool)setData:(id)arg1 withKey:(id)arg2;
+ (_Bool)delDataWithKey:(id)arg1 type:(id)arg2 num:(long long)arg3 sort:(id)arg4;
+ (_Bool)delDataWithKey:(id)arg1 type:(id)arg2;
+ (_Bool)delDataWithKey:(id)arg1;
+ (_Bool)delDataWithIndexArray:(id)arg1;
+ (_Bool)delDataWithIndex:(long long)arg1;
+ (_Bool)upDateData:(id)arg1 withKey:(id)arg2 type:(id)arg3;
+ (_Bool)upDateData:(id)arg1 withKey:(id)arg2;
+ (_Bool)insertData:(id)arg1 withKey:(id)arg2 type:(id)arg3 time:(unsigned long long)arg4;
+ (_Bool)insertData:(id)arg1 withKey:(id)arg2 type:(id)arg3;
+ (_Bool)insertData:(id)arg1 withKey:(id)arg2;
+ (id)getArrayWithKey:(id)arg1 type:(id)arg2 num:(long long)arg3 sort:(id)arg4;
+ (id)getArrayWithKey:(id)arg1 num:(long long)arg2 sort:(id)arg3;
+ (id)getTopDataWithKey:(id)arg1;
+ (id)getTopDictWithKey:(id)arg1;
+ (id)getArrayWithKey:(id)arg1;
+ (struct sqlite3 *)getSqlDataBase;
+ (_Bool)isExistColumnInTable:(id)arg1 ColumnName:(id)arg2;
+ (void)initialize;

@end

