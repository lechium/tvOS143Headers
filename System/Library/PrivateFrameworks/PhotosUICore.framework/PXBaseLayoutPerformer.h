/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXLayoutPerformer.h>

@class PXLayoutPerformerOutput, NSArray;

@interface PXBaseLayoutPerformer : NSObject <PXLayoutPerformer> {

	NSArray* children;
	PXLayoutPerformerOutput* layoutOutput;
	SCD_Struct_PX29 layoutInput;

}

@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)prepareForReuse;
-(CGSize)performLayout;
-(SCD_Struct_PX30)layoutInput;
-(void)setLayoutInput:(SCD_Struct_PX30)arg1 ;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setLayoutOutput:(PXLayoutPerformerOutput *)arg1 ;
@end

