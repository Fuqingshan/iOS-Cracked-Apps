//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class IQYContentConfig, NSDictionary, NSString;

@interface IQYContentConfigManager : DataLoadManager
{
    NSString *_business;
    NSString *_isIqiyi;
    NSString *_isVideoPage;
    NSString *_tvid;
    NSString *_albumid;
    NSString *_categoryid;
    NSString *_wallId;
    NSString *_ip;
    NSString *_entityId;
    IQYContentConfig *_config;
    NSDictionary *_configDic;
}

@property(retain, nonatomic) NSDictionary *configDic; // @synthesize configDic=_configDic;
@property(retain, nonatomic) IQYContentConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *wallId; // @synthesize wallId=_wallId;
@property(retain, nonatomic) NSString *categoryid; // @synthesize categoryid=_categoryid;
@property(retain, nonatomic) NSString *albumid; // @synthesize albumid=_albumid;
@property(retain, nonatomic) NSString *tvid; // @synthesize tvid=_tvid;
@property(retain, nonatomic) NSString *isVideoPage; // @synthesize isVideoPage=_isVideoPage;
@property(retain, nonatomic) NSString *isIqiyi; // @synthesize isIqiyi=_isIqiyi;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

