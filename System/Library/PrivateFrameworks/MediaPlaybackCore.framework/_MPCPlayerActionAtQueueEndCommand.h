/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerActionAtQueueEndCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerActionAtQueueEndCommand : _MPCPlayerCommand <MPCPlayerActionAtQueueEndCommand> {

	long long _actionAtQueueEnd;
	NSArray* _supportedActions;

}

@property (assign,nonatomic) long long actionAtQueueEnd;              //@synthesize actionAtQueueEnd=_actionAtQueueEnd - In the implementation block
@property (nonatomic,retain) NSArray * supportedActions;              //@synthesize supportedActions=_supportedActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)supportedActions;
-(void)setSupportedActions:(NSArray *)arg1 ;
-(id)setQueueEndAction:(long long)arg1 ;
-(long long)actionAtQueueEnd;
-(void)setActionAtQueueEnd:(long long)arg1 ;
@end
