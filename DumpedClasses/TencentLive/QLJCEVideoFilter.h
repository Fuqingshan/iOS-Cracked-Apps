//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEVideoFilter : JceObjectV2
{
    NSArray *jcev2_p_0_r_filterItemList__b0x9i_VOQLJCEVideoFilterItem;
    NSString *jcev2_p_1_o_reportParam;
    NSString *jcev2_p_2_o_type;
    NSString *jcev2_p_3_o_dataKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_3_o_dataKey; // @synthesize jcev2_p_3_o_dataKey;
@property(retain, nonatomic, getter=jce_type, setter=setJce_type:) NSString *jcev2_p_2_o_type; // @synthesize jcev2_p_2_o_type;
@property(retain, nonatomic, getter=jce_reportParam, setter=setJce_reportParam:) NSString *jcev2_p_1_o_reportParam; // @synthesize jcev2_p_1_o_reportParam;
@property(retain, nonatomic, getter=jce_filterItemList, setter=setJce_filterItemList:) NSArray *jcev2_p_0_r_filterItemList__b0x9i_VOQLJCEVideoFilterItem; // @synthesize jcev2_p_0_r_filterItemList__b0x9i_VOQLJCEVideoFilterItem;
- (void).cxx_destruct;
- (id)init;
- (id)stringFilterValueByIndexPathList:(id)arg1;
- (id)arraySelectedIndexPathList;

@end
