/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol PHMediaFormatConversionImplementation <NSObject>
@property (readonly) long long transferBehaviorUserPreference; 
@property (readonly) NSSet * ut_objectsToBeDeallocatedWithReceiver; 
@optional
-(NSSet *)ut_objectsToBeDeallocatedWithReceiver;

@required
-(long long)transferBehaviorUserPreference;
-(void)performConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

