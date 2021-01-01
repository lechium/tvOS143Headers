/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObjectNSCopying, OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSString, NSMutableArray, NSObject;

@interface AVChapterMetadataItemInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetRef figAsset;
	long long chapterGroupIndex;
	long long chapterIndex;
	NSString* chapterType;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	NSString* chapterDataType;
	id<NSObject><NSCopying> value;
	SCD_Struct_AV6 time;
	SCD_Struct_AV6 duration;
	long long valueStatus;
	int valueErrorCode;
	NSMutableArray* completions;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end
