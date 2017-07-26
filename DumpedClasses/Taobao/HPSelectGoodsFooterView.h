//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HPSelectGoodsViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class HPSelectGoodsView, NSArray, NSMutableArray, NSString, UICollectionView, UILabel;

@interface HPSelectGoodsFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, HPSelectGoodsViewDelegate>
{
    id <HPSelectGoodsFooterViewDelegate> _delegate;
    NSArray *_selectGoodArray;
    long long _maxSelectedGoods;
    UICollectionView *_seletedCollectionView;
    UIView *_countView;
    UILabel *_publishLabel;
    UILabel *_countlabel;
    UIView *_headLine;
    HPSelectGoodsView *_selectGoodsView;
    NSMutableArray *_selectedGoods;
}

@property(retain, nonatomic) NSMutableArray *selectedGoods; // @synthesize selectedGoods=_selectedGoods;
@property(retain, nonatomic) HPSelectGoodsView *selectGoodsView; // @synthesize selectGoodsView=_selectGoodsView;
@property(retain, nonatomic) UIView *headLine; // @synthesize headLine=_headLine;
@property(retain, nonatomic) UILabel *countlabel; // @synthesize countlabel=_countlabel;
@property(retain, nonatomic) UILabel *publishLabel; // @synthesize publishLabel=_publishLabel;
@property(retain, nonatomic) UIView *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) UICollectionView *seletedCollectionView; // @synthesize seletedCollectionView=_seletedCollectionView;
@property(nonatomic) long long maxSelectedGoods; // @synthesize maxSelectedGoods=_maxSelectedGoods;
@property(retain, nonatomic) NSArray *selectGoodArray; // @synthesize selectGoodArray=_selectGoodArray;
@property(nonatomic) __weak id <HPSelectGoodsFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goodsCollectionViewDidSelectedGood;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)gotoPublishViewController;
- (void)reloadAndScrollCollectionView;
- (void)reloadCollectionWithDeleteBtn:(id)arg1;
- (void)updateRemoveSelectedGoods:(id)arg1;
- (void)updateSelectedGoods:(id)arg1;
- (void)addNotification;
- (void)dealloc;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
