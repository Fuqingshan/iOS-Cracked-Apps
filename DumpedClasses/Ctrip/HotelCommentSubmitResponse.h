//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, ResponseHead;

@interface HotelCommentSubmitResponse : CTBusinessBean
{
    int _result;
    int _commentId;
    int _hotelDataType;
    int _cityID;
    int _hotelId;
    int _commentScore;
    ResponseHead *_head;
    NSString *_resultMessage;
    NSString *_hotelScore;
    NSString *_hotelName;
    NSString *_hotelImageUrl;
    NSString *_hotelType;
    NSString *_shareDes;
    NSString *_shareUrl;
}

@property(nonatomic) int commentScore; // @synthesize commentScore=_commentScore;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *shareDes; // @synthesize shareDes=_shareDes;
@property(copy, nonatomic) NSString *hotelType; // @synthesize hotelType=_hotelType;
@property(copy, nonatomic) NSString *hotelImageUrl; // @synthesize hotelImageUrl=_hotelImageUrl;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(copy, nonatomic) NSString *hotelScore; // @synthesize hotelScore=_hotelScore;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(nonatomic) int hotelDataType; // @synthesize hotelDataType=_hotelDataType;
@property(nonatomic) int commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) ResponseHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

