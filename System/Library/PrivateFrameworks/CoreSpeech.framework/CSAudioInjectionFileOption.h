/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSURL;

@interface CSAudioInjectionFileOption : NSObject {

	float _scaleFactor;
	NSURL* _audioURL;
	OpaqueExtAudioFileRef _fFile;
	AudioStreamBasicDescription _outASBD;

}

@property (nonatomic,readonly) NSURL * audioURL;                               //@synthesize audioURL=_audioURL - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription outASBD;              //@synthesize outASBD=_outASBD - In the implementation block
@property (assign,nonatomic) OpaqueExtAudioFileRef fFile;                      //@synthesize fFile=_fFile - In the implementation block
@property (nonatomic,readonly) float scaleFactor;                              //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(id)description;
-(float)scaleFactor;
-(NSURL *)audioURL;
-(OpaqueExtAudioFileRef)fFile;
-(id)initWithAudioURL:(id)arg1 withScaleFactor:(float)arg2 outASBD:(AudioStreamBasicDescription)arg3 ;
-(AudioStreamBasicDescription)outASBD;
-(void)setOutASBD:(AudioStreamBasicDescription)arg1 ;
-(void)setFFile:(OpaqueExtAudioFileRef)arg1 ;
@end

