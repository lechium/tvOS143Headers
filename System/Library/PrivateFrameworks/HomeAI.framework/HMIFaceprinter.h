/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceprinter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)currentModelUUID;
+(long long)_minorVersionFromVisionVersion:(int)arg1 ;
-(void)warmStart;
-(CVBufferRef)createFacePixelBufferForFaceDetection:(id)arg1 pixelBuffer:(CVBufferRef)arg2 roll:(id)arg3 error:(id*)arg4 ;
-(id)createFaceprintForFacePixelBuffer:(CVBufferRef)arg1 fastMode:(BOOL)arg2 error:(id*)arg3 ;
-(CVBufferRef)createFacePixelBufferFromFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)generateFaceprintForFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)updatedFaceprintsForFaceCrops:(id)arg1 withExistingFaceprints:(id)arg2 error:(id*)arg3 ;
@end
