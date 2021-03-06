/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _TVRCMRTelevisionWrapper, _TVRCRPCompanionLinkClientWrapper, _TVRCHMServiceWrapper, _TVRXDevice;

@interface _TVRDeviceAggregate : NSObject {

	_TVRCMRTelevisionWrapper* _mediaRemote;
	_TVRCRPCompanionLinkClientWrapper* _rapport;
	_TVRCHMServiceWrapper* _homeKit;
	_TVRXDevice* _publicDevice;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * mediaRemote;                   //@synthesize mediaRemote=_mediaRemote - In the implementation block
@property (nonatomic,retain) _TVRCRPCompanionLinkClientWrapper * rapport;              //@synthesize rapport=_rapport - In the implementation block
@property (nonatomic,retain) _TVRCHMServiceWrapper * homeKit;                          //@synthesize homeKit=_homeKit - In the implementation block
@property (nonatomic,retain) _TVRXDevice * publicDevice;                               //@synthesize publicDevice=_publicDevice - In the implementation block
-(BOOL)isEmpty;
-(void)setRapport:(_TVRCRPCompanionLinkClientWrapper *)arg1 ;
-(id)bestImpl;
-(_TVRCMRTelevisionWrapper *)mediaRemote;
-(void)setMediaRemote:(_TVRCMRTelevisionWrapper *)arg1 ;
-(_TVRCRPCompanionLinkClientWrapper *)rapport;
-(_TVRCHMServiceWrapper *)homeKit;
-(void)setHomeKit:(_TVRCHMServiceWrapper *)arg1 ;
-(_TVRXDevice *)publicDevice;
-(void)setPublicDevice:(_TVRXDevice *)arg1 ;
@end

