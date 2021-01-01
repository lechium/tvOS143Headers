/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXPhotosDetailsHeaderSpec : PXFeatureSpec {

	unsigned long long _contentInsetEdges;

}

@property (nonatomic,readonly) unsigned long long contentInsetEdges;              //@synthesize contentInsetEdges=_contentInsetEdges - In the implementation block
@property (nonatomic,readonly) CGSize playButtonSize; 
-(double)defaultCornerRadius;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(CGSize)playButtonSize;
-(id)createViewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(unsigned long long)contentInsetEdges;
@end

