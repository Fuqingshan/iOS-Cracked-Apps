//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class NSString;

@interface HCPttSeatRequest : GSBaseRequest <GSRequestProtocol>
{
    _Bool _isSeatOn;
    unsigned int _seatID;
    NSString *_topicID;
    unsigned long long _guestUin;
    unsigned long long _groupCode;
}

@property(nonatomic) unsigned int seatID; // @synthesize seatID=_seatID;
@property(nonatomic) _Bool isSeatOn; // @synthesize isSeatOn=_isSeatOn;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned long long guestUin; // @synthesize guestUin=_guestUin;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
- (void).cxx_destruct;
- (id)parseResponseBodyString:(void *)arg1;
- (id)translateHeaderCode:(unsigned int)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
