//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TXDynamicConfigModel;

@interface TXCommonConfigModel : TBJSONModel
{
    NSString *_errcode;
    TXDynamicConfigModel *_result;
}

+ (id)deepCopy:(id)arg1;
@property(retain, nonatomic) TXDynamicConfigModel *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *errcode; // @synthesize errcode=_errcode;
- (void).cxx_destruct;

@end
