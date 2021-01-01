/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterTerminalHelper.h>

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {

	NSError* _terminalError;

}
-(void)dealloc;
-(id)error;
-(long long)status;
-(void)flush;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)finishWriting;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)flushSegment;
-(void)setFinishWritingDelegate:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2 ;
@end

