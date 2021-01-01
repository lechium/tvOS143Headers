/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVLoggingIdentifier.h>

@class AVAssetLoggingIdentifierInternal, NSString;

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVAssetLoggingIdentifierInternal* _priv;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)makeDerivedIdentifier;
@end
