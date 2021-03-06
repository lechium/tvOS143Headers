/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SIRINLURequestID, SIRINLUTurnInput, NSArray;

@interface SIRINLURequest : NSObject <NSSecureCoding> {

	SIRINLURequestID* _requestId;
	SIRINLUTurnInput* _currentTurnInput;
	NSArray* _previousTurnInputs;

}

@property (nonatomic,retain) SIRINLURequestID * requestId;                     //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) SIRINLUTurnInput * currentTurnInput;              //@synthesize currentTurnInput=_currentTurnInput - In the implementation block
@property (nonatomic,retain) NSArray * previousTurnInputs;                     //@synthesize previousTurnInputs=_previousTurnInputs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SIRINLURequestID *)requestId;
-(void)setRequestId:(SIRINLURequestID *)arg1 ;
-(SIRINLUTurnInput *)currentTurnInput;
-(NSArray *)previousTurnInputs;
-(id)initWithRequestId:(id)arg1 currentTurnInput:(id)arg2 previousTurnInputs:(id)arg3 ;
-(void)setCurrentTurnInput:(SIRINLUTurnInput *)arg1 ;
-(void)setPreviousTurnInputs:(NSArray *)arg1 ;
@end

