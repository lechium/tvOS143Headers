/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNTracker.h>

@class FaceCoreDetector, NSDictionary;

@interface VNObjectTrackerLegacyFaceCore : VNTracker {

	FaceCoreDetector* _detector;
	NSDictionary* _detectOptions;
	NSDictionary* _extractOptions;

}
+(id)_convertOptionsToFaceCoreExtractOptions:(id)arg1 ;
+(id)_convertOptionsToFaceCoreDetectOptions:(id)arg1 ;
+(id)_convertOptionsToFaceCoreSetupOptions:(id)arg1 ;
+(Class)trackerObservationClass;
-(BOOL)reset:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)isResettable;
-(id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(id)trackInFrame:(id)arg1 error:(id*)arg2 ;
-(id)_detectFacesInImage:(id)arg1 error:(id*)arg2 ;
@end

