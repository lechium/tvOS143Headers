/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface _TVCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _heterogeneous;

}

@property (assign,getter=isHeterogeneous,nonatomic) BOOL heterogeneous;              //@synthesize heterogeneous=_heterogeneous - In the implementation block
-(id)init;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)isHeterogeneous;
-(void)setHeterogeneous:(BOOL)arg1 ;
-(double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2 ;
-(long long)developmentLayoutDirection;
@end

