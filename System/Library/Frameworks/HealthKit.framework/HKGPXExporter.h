/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKWorkoutRoute, NSFileHandle, NSISO8601DateFormatter, NSURL;

@interface HKGPXExporter : NSObject {

	HKWorkoutRoute* _route;
	NSFileHandle* _fileHandle;
	NSISO8601DateFormatter* _isoFormatter;
	BOOL _isFinished;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
+(id)_displayNameForRoute:(id)arg1 ;
+(id)fileNameForRoute:(id)arg1 ;
-(NSURL *)URL;
-(BOOL)isFinished;
-(BOOL)finishWithError:(id*)arg1 ;
-(BOOL)_appendGPXHeaderWithError:(id*)arg1 ;
-(id)_trackpointEntryForLocation:(id)arg1 ;
-(BOOL)_appendString:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 route:(id)arg2 ;
-(BOOL)appendLocations:(id)arg1 error:(id*)arg2 ;
@end
