/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKChannelsResponse, NSString;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation {

	BOOL _filtered;
	WLKChannelsResponse* _channelsResponse;
	NSString* _caller;

}

@property (nonatomic,copy) NSString * caller;                                     //@synthesize caller=_caller - In the implementation block
@property (assign,nonatomic) BOOL filtered;                                       //@synthesize filtered=_filtered - In the implementation block
@property (nonatomic,retain) WLKChannelsResponse * channelsResponse;              //@synthesize channelsResponse=_channelsResponse - In the implementation block
-(BOOL)filtered;
-(void)setFiltered:(BOOL)arg1 ;
-(NSString *)caller;
-(void)setCaller:(NSString *)arg1 ;
-(void)processResponse;
-(id)initWithCaller:(id)arg1 ;
-(id)initWithCaller:(id)arg1 filtered:(BOOL)arg2 ;
-(void)setChannelsResponse:(WLKChannelsResponse *)arg1 ;
-(WLKChannelsResponse *)channelsResponse;
@end

