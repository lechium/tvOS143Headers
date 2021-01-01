/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, UIColor;


@protocol PXProtoFeature <NSObject>
@property (nonatomic,readonly) long long featureKind; 
@property (nonatomic,readonly) long long featureGroupIndex; 
@property (nonatomic,readonly) NSString * featureLocalizedTitle; 
@property (nonatomic,readonly) NSArray * featurePeople; 
@property (nonatomic,readonly) double featureScore; 
@property (nonatomic,readonly) UIColor * featureTintColor; 
@property (nonatomic,readonly) UIColor * featureSelectedTintColor; 
@optional
-(NSString *)featureLocalizedTitle;
-(NSArray *)featurePeople;
-(double)featureScore;
-(UIColor *)featureTintColor;
-(UIColor *)featureSelectedTintColor;

@required
-(long long)featureKind;
-(long long)featureGroupIndex;

@end

