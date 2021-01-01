/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVMLCollectionViewController.h>

@interface _TVGridViewController : _TVMLCollectionViewController {

	BOOL _configureForListTemplate;

}
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(id)makeCollectionViewWithFrame:(CGRect)arg1 ;
-(BOOL)contentFlowsVertically;
-(void)updateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2 ;
-(BOOL)shouldHeaderFloatByDefault;
@end

