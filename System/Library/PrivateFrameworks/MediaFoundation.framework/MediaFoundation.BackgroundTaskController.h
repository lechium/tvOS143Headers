/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFResettable.h>
#import <libobjc.A.dylib/MFStateDumpable.h>

@class NSDictionary;

@interface MediaFoundation.BackgroundTaskController : _UKNOWN_SUPERCLASS_ <MFResettable, MFStateDumpable> {

	 provider;
	 reporter;
	 tasks;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(void)reset;
-(NSDictionary *)stateDictionary;
@end

