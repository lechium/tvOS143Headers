/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXLayoutItemInput <NSObject>
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGPoint positionOffset; 
@property (nonatomic,readonly) CGRect preferredCropRect; 
@property (nonatomic,readonly) CGRect acceptableCropRect; 
@required
-(CGSize)size;
-(CGAffineTransform)transform;
-(double)weight;
-(CGRect)preferredCropRect;
-(CGRect)acceptableCropRect;
-(double)weightUsingCriterion:(long long)arg1;
-(CGPoint)positionOffset;

@end

