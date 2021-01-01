/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@protocol SIRINLUUserDialogAct;
@class NSString;

@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	id<SIRINLUUserDialogAct> _offeredAct;

}

@property (nonatomic,retain) id<SIRINLUUserDialogAct> offeredAct;              //@synthesize offeredAct=_offeredAct - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
-(id<SIRINLUUserDialogAct>)offeredAct;
-(id)initWithOfferedAct:(id)arg1 ;
-(void)setOfferedAct:(id<SIRINLUUserDialogAct>)arg1 ;
@end
