//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMBreakfastModelTabelViewCell.h"

@class NVMBreakfastCurrencyLabel, UIImageView, UILabel, UIView;

@interface NVMBreakfastOrderDishCell : NVMBreakfastModelTabelViewCell
{
    UIImageView *_dishImageView;
    UILabel *_dishNameLabel;
    UILabel *_countLabel;
    UILabel *_discountLabel;
    NVMBreakfastCurrencyLabel *_priceLabel;
    UIView *_separateLineView;
}

@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) NVMBreakfastCurrencyLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *dishNameLabel; // @synthesize dishNameLabel=_dishNameLabel;
@property(retain, nonatomic) UIImageView *dishImageView; // @synthesize dishImageView=_dishImageView;
- (void).cxx_destruct;
- (void)layoutUI;

@end
