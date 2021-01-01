/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface _UIPageIndicatorView : UIImageView {

	long long _page;

}

@property (assign,nonatomic) long long page;              //@synthesize page=_page - In the implementation block
-(id)debugDescription;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInvalidated;
-(long long)page;
-(void)setPage:(long long)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepare;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateSymbolConfigurationForTraitCollection;
-(CGSize)sizeForImage:(id)arg1 withTraitCollection:(id)arg2 ;
@end

