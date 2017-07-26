//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SpriteConfigFileInfo : NSObject
{
    unsigned int version;
    NSString *name;
    NSString *bubbleTips;
    NSArray *dressIds;
    NSDictionary *audioDic;
    NSArray *vibrateArray;
    NSArray *bubbleTextArray;
}

@property(retain, nonatomic) NSArray *bubbleTextArray; // @synthesize bubbleTextArray;
@property(retain, nonatomic) NSArray *vibrateArray; // @synthesize vibrateArray;
@property(retain, nonatomic) NSDictionary *audioDic; // @synthesize audioDic;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSArray *dressIds; // @synthesize dressIds;
@property(retain, nonatomic) NSString *bubbleTips; // @synthesize bubbleTips;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)initWithPath:(id)arg1;
- (void)dealloc;

@end
