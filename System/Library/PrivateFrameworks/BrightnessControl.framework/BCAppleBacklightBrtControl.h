/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrightnessControl/BrightnessControl-Structs.h>
#import <BrightnessControl/BCBrtControl.h>

@interface BCAppleBacklightBrtControl : BCBrtControl {

	unsigned _backlightService;
	double _minUser;
	double _maxUser;
	double _minMilliAmps;
	double _maxMilliAmps;
	BOOL _isDFR;
	BOOL _isDCP;
	BOOL _override;
	SCD_Struct_BC0* _terminationCallback;
	IONotificationPortRef _terminationNotifPort;
	unsigned _terminationIterator;

}

@property (readonly) unsigned long long registryID; 
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
-(id)init;
-(void)dealloc;
-(unsigned long long)registryID;
-(id)initWithService:(unsigned)arg1 ;
-(id)ID;
-(id)copyModuleIdentifier;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(BOOL)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(void)setDisplayService:(unsigned)arg1 ;
@end

