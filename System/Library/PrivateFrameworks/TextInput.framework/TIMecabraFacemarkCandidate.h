/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate {

	NSString* _category;

}

@property (nonatomic,copy) NSString * category;              //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
+(id)candidateWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isFacemarkCandidate;
-(id)initWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
@end

