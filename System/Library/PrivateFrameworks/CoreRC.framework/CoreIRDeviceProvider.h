/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreIRDevice.h>

@class NSMutableSet, NSDictionary;

@interface CoreIRDeviceProvider : CoreIRDevice {

	NSMutableSet* _commandMappings;
	SCD_Struct_Co5* _buttonArray[18];
	unsigned long long _buttonCount;
	unsigned long long _lastCommandTimestamp;
	const SCD_Struct_Co5* _lastButtonPressed;
	unsigned long long _pressAndHoldTimeoutGenerationCount;
	NSDictionary* _matchingDict;

}

@property (nonatomic,copy) NSDictionary * persistentProperties; 
@property (nonatomic,copy) NSDictionary * matchingDict;                      //@synthesize matchingDict=_matchingDict - In the implementation block
@property (nonatomic,readonly) unsigned protocolMask; 
+(void)load;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)interface;
-(id)initWithDevice:(id)arg1 ;
-(NSDictionary *)persistentProperties;
-(BOOL)sendCommand:(unsigned long long)arg1 target:(id)arg2 withDuration:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)setOSDName:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)setCommand:(unsigned long long)arg1 target:(id)arg2 forButtonCombination:(id)arg3 delay:(double)arg4 error:(id*)arg5 ;
-(BOOL)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)clearAllStoredCommands:(id*)arg1 ;
-(id)startLearningSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)updateMappingWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)extendedPropertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 deviceType:(unsigned long long)arg3 ;
-(id)busProvider;
-(BOOL)dispatchButtonEventWithCommand:(unsigned long long)arg1 pressed:(BOOL)arg2 timestamp:(unsigned long long)arg3 toDevice:(id)arg4 ;
-(BOOL)dispatchEventsForCommand:(id)arg1 toDevice:(id)arg2 ;
-(unsigned)protocolMask;
-(BOOL)setMappingWithSession:(id)arg1 error:(id*)arg2 ;
-(void)setMatchingDict:(NSDictionary *)arg1 ;
-(NSDictionary *)matchingDict;
-(void)setPersistentProperties:(NSDictionary *)arg1 ;
-(void)handleIRCommand:(id)arg1 ;
-(BOOL)sendCommand:(id)arg1 error:(id*)arg2 ;
-(void)_removeMappingForCommand:(unsigned long long)arg1 ;
-(id)infraredCommandForCommand:(unsigned long long)arg1 ;
-(int)_setInfraredCommandPattern:(id)arg1 repeatPattern:(id)arg2 forCommand:(unsigned long long)arg3 ;
-(SCD_Struct_Co5*)_findButtonWithCommand:(unsigned long long)arg1 ;
-(BOOL)setInfraredCommand:(id)arg1 forCommand:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)learningSessionProvider;
-(BOOL)dispatchEventForCommand:(id)arg1 matchingButton:(const SCD_Struct_Co5*)arg2 timestamp:(unsigned long long)arg3 toDevice:(id)arg4 ;
-(unsigned long long)findDuplicateIRCommand:(id)arg1 forCommand:(unsigned long long)arg2 device:(id*)arg3 ;
-(void)synthesizeButtonReleaseWithTimestamp:(unsigned long long)arg1 ;
-(void)cancelPressAndHoldTimer;
-(void)schedulePressAndHoldTimer;
@end

