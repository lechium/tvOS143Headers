/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSArray, NSMutableArray;

@interface BWFigCaptureDevice : NSObject {

	OpaqueFigCaptureDeviceRef _device;
	NSDictionary* _supportedProperties;
	NSDictionary* _streamsByPortType;
	NSArray* _streams;
	NSArray* _synchronizedStreamsGroups;
	NSMutableArray* _activeProcessingSessions;
	BOOL _invalidated;
	os_unfair_lock_s _lock;
	unsigned _ktraceCodePrefix;

}

@property (readonly) NSDictionary * supportedProperties;               //@synthesize supportedProperties=_supportedProperties - In the implementation block
@property (readonly) NSArray * streams;                                //@synthesize streams=_streams - In the implementation block
@property (readonly) NSArray * synchronizedStreamsGroups;              //@synthesize synchronizedStreamsGroups=_synchronizedStreamsGroups - In the implementation block
@property (readonly) BOOL invalidated; 
+(void)initialize;
-(void)dealloc;
-(void)invalidate;
-(NSDictionary *)supportedProperties;
-(BOOL)invalidated;
-(NSArray *)streams;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)registerForNotification:(CFStringRef)arg1 listener:(const void*)arg2 callback:(/*function pointer*/void*)arg3 ;
-(int)unregisterForNotification:(CFStringRef)arg1 listener:(const void*)arg2 ;
-(id)copySynchronizedStreamsGroupForStreams:(id)arg1 error:(int*)arg2 ;
-(id)copyStreamsWithPortTypes:(id)arg1 error:(int*)arg2 ;
-(int)relinquishControlOfStreams:(id)arg1 ;
-(id)copyStreamWithPortType:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)requestControlOfStreams:(id)arg1 ;
-(OpaqueFigCaptureDeviceRef)figCaptureDevice;
-(id)initWithFigCaptureDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(NSArray *)synchronizedStreamsGroups;
-(id)copyISPProcessingSessionWithType:(int)arg1 error:(int*)arg2 ;
-(void)processingSessionHasBeenInvalidated:(id)arg1 ;
-(void)resetSynchronizedStreamsGroups;
-(int)setMultiCamConfigurationWithActiveUnsynchronizedStreams:(id)arg1 activeSynchronizedStreamsGroups:(id)arg2 cameraControlsPriority:(id)arg3 ;
@end

