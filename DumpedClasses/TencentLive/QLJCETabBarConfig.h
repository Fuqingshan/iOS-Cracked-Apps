//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCETabBarConfig : JceObjectV2
{
    NSString *jcev2_p_0_o_bgUrl;
    NSString *jcev2_p_1_o_bgColor;
    NSString *jcev2_p_2_o_vipIconNormal;
    NSString *jcev2_p_3_o_vipIconSelected;
    NSString *jcev2_p_4_o_textColor;
    NSString *jcev2_p_5_o_iconColor;
    long long jcev2_p_6_o_startTime;
    long long jcev2_p_7_o_endTime;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_endTime, setter=setJce_endTime:) long long jcev2_p_7_o_endTime; // @synthesize jcev2_p_7_o_endTime;
@property(nonatomic, getter=jce_startTime, setter=setJce_startTime:) long long jcev2_p_6_o_startTime; // @synthesize jcev2_p_6_o_startTime;
@property(retain, nonatomic, getter=jce_iconColor, setter=setJce_iconColor:) NSString *jcev2_p_5_o_iconColor; // @synthesize jcev2_p_5_o_iconColor;
@property(retain, nonatomic, getter=jce_textColor, setter=setJce_textColor:) NSString *jcev2_p_4_o_textColor; // @synthesize jcev2_p_4_o_textColor;
@property(retain, nonatomic, getter=jce_vipIconSelected, setter=setJce_vipIconSelected:) NSString *jcev2_p_3_o_vipIconSelected; // @synthesize jcev2_p_3_o_vipIconSelected;
@property(retain, nonatomic, getter=jce_vipIconNormal, setter=setJce_vipIconNormal:) NSString *jcev2_p_2_o_vipIconNormal; // @synthesize jcev2_p_2_o_vipIconNormal;
@property(retain, nonatomic, getter=jce_bgColor, setter=setJce_bgColor:) NSString *jcev2_p_1_o_bgColor; // @synthesize jcev2_p_1_o_bgColor;
@property(retain, nonatomic, getter=jce_bgUrl, setter=setJce_bgUrl:) NSString *jcev2_p_0_o_bgUrl; // @synthesize jcev2_p_0_o_bgUrl;
- (void).cxx_destruct;
- (id)init;

@end
