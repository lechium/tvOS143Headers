/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer {

	NSArray* children;
	PXLayoutPerformerOutput* layoutOutput;
	SCD_Struct_PX29 layoutInput;

}
-(id)children;
-(CGSize)performLayout;
-(SCD_Struct_PX30)layoutInput;
-(void)setLayoutInput:(SCD_Struct_PX30)arg1 ;
-(id)layoutOutput;
-(void)setLayoutOutput:(id)arg1 ;
@end
