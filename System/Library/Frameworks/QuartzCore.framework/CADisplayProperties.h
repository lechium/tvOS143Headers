/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject {

	CADisplayMode* _currentMode;
	NSString* _overscanAdjustment;
	unsigned _connectionSeed;

}

@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (assign,nonatomic) unsigned connectionSeed; 
-(void)dealloc;
-(CADisplayMode *)currentMode;
-(unsigned)connectionSeed;
-(NSString *)overscanAdjustment;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(void)setConnectionSeed:(unsigned)arg1 ;
@end
