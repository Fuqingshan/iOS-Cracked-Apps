//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSString;
@protocol Optional;

@interface QYPPCircleSignWallInfoData : QYPPJsonData
{
    NSString<Optional> *_wallId;
    NSString<Optional> *_wallType;
    NSString<Optional> *_name;
    NSString<Optional> *_wallIcon;
}

@property(retain, nonatomic) NSString<Optional> *wallIcon; // @synthesize wallIcon=_wallIcon;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString<Optional> *wallType; // @synthesize wallType=_wallType;
@property(retain, nonatomic) NSString<Optional> *wallId; // @synthesize wallId=_wallId;
- (void).cxx_destruct;

@end

