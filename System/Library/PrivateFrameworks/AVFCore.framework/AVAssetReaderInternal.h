/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVAsset, NSMutableArray, NSMutableSet, NSError, NSObject;

@interface AVAssetReaderInternal : NSObject {

	AVWeakReference* weakReference;
	AVAsset* asset;
	OpaqueFigAssetReaderRef figAssetReader;
	SCD_Struct_AV7 timeRange;
	BOOL readSingleSample;
	NSMutableArray* outputs;
	NSMutableSet* outputFinishedCallbackInvokers;
	long long status;
	NSError* error;
	NSError* errorThatOccurredBeforeStartReading;
	NSObject*<OS_dispatch_queue> statusReadWriteQueue;

}
@end
