//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQYellowPagesBusinessRecord;

@interface QQYellowPagesCallRecord : NSObject
{
    unsigned long long _time;
    QQYellowPagesBusinessRecord *_record;
    NSString *_phoneNumberCalled;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *phoneNumberCalled; // @dynamic phoneNumberCalled;
@property(retain, nonatomic) QQYellowPagesBusinessRecord *record; // @dynamic record;
@property(nonatomic) unsigned long long time; // @dynamic time;

@end
