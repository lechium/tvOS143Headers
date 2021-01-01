/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject {

	NSDictionary* _propertyListRepresentation;
	NSMutableArray* _complexPatternDescription;
	id _contextObject;

}

@property (nonatomic,readonly) id _artificiallyRepeatingPropertyListRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
@property (nonatomic,retain) id contextObject;                                                   //@synthesize contextObject=_contextObject - In the implementation block
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1 ;
+(id)noneVibrationPattern;
+(id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1 ;
-(id)init;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)_artificiallyRepeatingPropertyListRepresentation;
-(id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2 ;
-(double)_computedDuration;
-(void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2 ;
-(id)contextObject;
-(void)setContextObject:(id)arg1 ;
@end

