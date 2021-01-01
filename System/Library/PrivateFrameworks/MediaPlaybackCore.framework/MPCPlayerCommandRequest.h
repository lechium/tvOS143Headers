/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, MPCMediaRemoteController, MPCPlayerPath, NSString;

@interface MPCPlayerCommandRequest : NSObject {

	unsigned _command;
	NSDictionary* _options;
	NSDictionary* _userInitiatedOptions;
	MPCMediaRemoteController* _controller;
	MPCPlayerPath* _playerPath;
	NSString* _label;

}

@property (nonatomic,readonly) unsigned command;                                   //@synthesize command=_command - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * userInitiatedOptions;                    //@synthesize userInitiatedOptions=_userInitiatedOptions - In the implementation block
@property (nonatomic,readonly) MPCMediaRemoteController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath;                         //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSString * label;                                       //@synthesize label=_label - In the implementation block
-(NSDictionary *)options;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)command;
-(MPCMediaRemoteController *)controller;
-(MPCPlayerPath *)playerPath;
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 label:(id)arg4 ;
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 controller:(id)arg3 label:(id)arg4 ;
-(void)setCommandOptionValue:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)userInitiatedOptions;
-(void)setUserInitiatedOptions:(NSDictionary *)arg1 ;
@end

