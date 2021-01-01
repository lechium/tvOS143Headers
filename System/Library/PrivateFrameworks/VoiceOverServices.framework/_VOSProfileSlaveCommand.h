/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSCommand, _VOSProfileCommand;

@interface _VOSProfileSlaveCommand : NSObject <NSSecureCoding> {

	VOSCommand* _command;
	unsigned long long _context;
	unsigned long long _pressCount;
	_VOSProfileCommand* _masterProfileCommand;

}

@property (nonatomic,retain) VOSCommand * command;                                          //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned long long context;                                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long pressCount;                                 //@synthesize pressCount=_pressCount - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileCommand * masterProfileCommand;              //@synthesize masterProfileCommand=_masterProfileCommand - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileSlaveCommandWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3 ;
+(id)profileSlaveCommandWithStringValue:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setCommand:(VOSCommand *)arg1 ;
-(VOSCommand *)command;
-(unsigned long long)pressCount;
-(void)setMasterProfileCommand:(_VOSProfileCommand *)arg1 ;
-(id)_initWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3 ;
-(void)setPressCount:(unsigned long long)arg1 ;
-(_VOSProfileCommand *)masterProfileCommand;
@end
