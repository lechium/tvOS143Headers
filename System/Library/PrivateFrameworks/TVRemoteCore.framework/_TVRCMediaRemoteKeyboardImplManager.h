/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _TVRCMediaRemoteLegacyKeyboardImpl, _TVRCMediaRemoteRemoteTextInputKeyboardImpl, _TVRCMRTelevisionWrapper;

@interface _TVRCMediaRemoteKeyboardImplManager : NSObject {

	NSString* _version;
	_TVRCMediaRemoteLegacyKeyboardImpl* _legacyImpl;
	_TVRCMediaRemoteRemoteTextInputKeyboardImpl* _rtiImpl;
	_TVRCMRTelevisionWrapper* _television;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;              //@synthesize television=_television - In the implementation block
-(_TVRCMRTelevisionWrapper *)television;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(id)initWithTelevisionSystemVersion:(id)arg1 ;
-(id)keyboardImpl;
@end

