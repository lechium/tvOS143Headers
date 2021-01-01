/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVOutputSettingsValidation.h>

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {

	AVMediaFileType* _fileType;

}

@property (nonatomic,readonly) AVMediaFileType * fileType; 
+(void)initialize;
+(id)mediaFileOutputSettingsValidatorForFileType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(AVMediaFileType *)fileType;
-(id)initWithFileType:(id)arg1 ;
-(BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2 ;
@end

