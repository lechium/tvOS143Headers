/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOServerFormattedString;
@class NSArray;

@interface MNTransitInstruction : NSObject {

	BOOL _hideTimeInstructionsWhenCollapsed;
	long long _context;
	NSArray* _majorFormattedInstruction;
	NSArray* _minorFormattedInstruction;
	NSArray* _tertiaryFormattedInstruction;
	id<GEOServerFormattedString> _departureBarInstruction;
	long long _departureBarStyle;
	id<GEOServerFormattedString> _countStopsFormattedString;
	id<GEOServerFormattedString> _expandableListFormattedString;
	id<GEOServerFormattedString> _primaryTimeInstruction;
	id<GEOServerFormattedString> _secondaryTimeinstruction;

}

@property (nonatomic,copy) NSArray * majorFormattedInstruction;                                       //@synthesize majorFormattedInstruction=_majorFormattedInstruction - In the implementation block
@property (nonatomic,copy) NSArray * minorFormattedInstruction;                                       //@synthesize minorFormattedInstruction=_minorFormattedInstruction - In the implementation block
@property (nonatomic,copy) NSArray * tertiaryFormattedInstruction;                                    //@synthesize tertiaryFormattedInstruction=_tertiaryFormattedInstruction - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> departureBarInstruction;                    //@synthesize departureBarInstruction=_departureBarInstruction - In the implementation block
@property (assign,nonatomic) long long departureBarStyle;                                             //@synthesize departureBarStyle=_departureBarStyle - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> countStopsFormattedString;                  //@synthesize countStopsFormattedString=_countStopsFormattedString - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> expandableListFormattedString;              //@synthesize expandableListFormattedString=_expandableListFormattedString - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> primaryTimeInstruction;                     //@synthesize primaryTimeInstruction=_primaryTimeInstruction - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> secondaryTimeinstruction;                   //@synthesize secondaryTimeinstruction=_secondaryTimeinstruction - In the implementation block
@property (assign,nonatomic) BOOL hideTimeInstructionsWhenCollapsed;                                  //@synthesize hideTimeInstructionsWhenCollapsed=_hideTimeInstructionsWhenCollapsed - In the implementation block
@property (nonatomic,readonly) long long context;                                                     //@synthesize context=_context - In the implementation block
+(id)instructionForUncertainArrivalToStationStep:(id)arg1 context:(long long)arg2 ;
-(long long)context;
-(id)initWithContext:(long long)arg1 ;
-(void)setDepartureBarStyle:(long long)arg1 ;
-(long long)departureBarStyle;
-(id)instructionSet;
-(id<GEOServerFormattedString>)countStopsFormattedString;
-(id<GEOServerFormattedString>)expandableListFormattedString;
-(id)instructionSetsForInstructionType:(long long)arg1 ;
-(void)setMajorFormattedInstruction:(NSArray *)arg1 ;
-(void)setMinorFormattedInstruction:(NSArray *)arg1 ;
-(void)setTertiaryFormattedInstruction:(NSArray *)arg1 ;
-(void)setDepartureBarInstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setCountStopsFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(void)setExpandableListFormattedString:(id<GEOServerFormattedString>)arg1 ;
-(void)setPrimaryTimeInstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setSecondaryTimeinstruction:(id<GEOServerFormattedString>)arg1 ;
-(void)setHideTimeInstructionsWhenCollapsed:(BOOL)arg1 ;
-(id)overridenInstructionsMapping;
-(NSArray *)majorFormattedInstruction;
-(NSArray *)minorFormattedInstruction;
-(NSArray *)tertiaryFormattedInstruction;
-(id<GEOServerFormattedString>)primaryTimeInstruction;
-(id<GEOServerFormattedString>)secondaryTimeinstruction;
-(void)_fillInInstructions;
-(void)refreshInstructionStrings;
-(id)formattedInstructionForType:(long long)arg1 ;
-(id<GEOServerFormattedString>)departureBarInstruction;
-(BOOL)hideTimeInstructionsWhenCollapsed;
@end

