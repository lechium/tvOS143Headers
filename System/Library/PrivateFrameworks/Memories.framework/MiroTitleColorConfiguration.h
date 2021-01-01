/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/MiroColorConfiguration.h>
#import <libobjc.A.dylib/MiroTitleColorConfiguration.h>

@protocol MiroTitleColorConfiguration <NSObject>
@property (nonatomic,readonly) unsigned long long titleColorTreatment; 
@property (nonatomic,readonly) unsigned long long subtitleColorTreatment; 
@property (nonatomic,readonly) unsigned long long backgroundShapeColorTreatment; 
@property (nonatomic,readonly) BOOL titleStyleHasColorRigging; 
@property (nonatomic,readonly) BOOL titleStyleHasStrap; 
@property (nonatomic,readonly) BOOL titleStyleIsCentered; 
@property (nonatomic,readonly) BOOL titleStyleIsLowerThird; 
@property (nonatomic,readonly) BOOL titleStyleIsSideBySide; 
@required
-(unsigned long long)titleColorTreatment;
-(unsigned long long)subtitleColorTreatment;
-(unsigned long long)backgroundShapeColorTreatment;
-(BOOL)titleStyleHasColorRigging;
-(BOOL)titleStyleHasStrap;
-(BOOL)titleStyleIsCentered;
-(BOOL)titleStyleIsLowerThird;
-(BOOL)titleStyleIsSideBySide;

@end


@class NSDictionary, NSString;

@interface MiroTitleColorConfiguration : MiroColorConfiguration <MiroTitleColorConfiguration> {

	int _snapshotAspect;
	NSDictionary* _titleParameters;
	NSString* _debugTitleName;

}

@property (assign,nonatomic) int snapshotAspect;                                              //@synthesize snapshotAspect=_snapshotAspect - In the implementation block
@property (nonatomic,retain) NSDictionary * titleParameters;                                  //@synthesize titleParameters=_titleParameters - In the implementation block
@property (nonatomic,retain) NSString * debugTitleName;                                       //@synthesize debugTitleName=_debugTitleName - In the implementation block
@property (nonatomic,readonly) unsigned long long titleColorTreatment; 
@property (nonatomic,readonly) unsigned long long subtitleColorTreatment; 
@property (nonatomic,readonly) unsigned long long backgroundShapeColorTreatment; 
@property (nonatomic,readonly) BOOL titleStyleHasColorRigging; 
@property (nonatomic,readonly) BOOL titleStyleHasStrap; 
@property (nonatomic,readonly) BOOL titleStyleIsCentered; 
@property (nonatomic,readonly) BOOL titleStyleIsLowerThird; 
@property (nonatomic,readonly) BOOL titleStyleIsSideBySide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)titleColorConfigurationWithTitleStyleID:(id)arg1 snapshotAspect:(int)arg2 randomizerSeed:(unsigned)arg3 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)initWithTitleStyleID:(id)arg1 randomizerSeed:(unsigned)arg2 ;
-(void)setSnapshotAspect:(int)arg1 ;
-(NSDictionary *)titleParameters;
-(BOOL)_verifyTitleStylesAreCorrect:(id)arg1 ;
-(NSString *)debugTitleName;
-(void)setTitleParameters:(NSDictionary *)arg1 ;
-(void)setDebugTitleName:(NSString *)arg1 ;
-(int)snapshotAspect;
-(unsigned long long)titleColorTreatment;
-(unsigned long long)subtitleColorTreatment;
-(unsigned long long)backgroundShapeColorTreatment;
-(BOOL)titleStyleHasColorRigging;
-(BOOL)titleStyleHasStrap;
-(BOOL)titleStyleIsCentered;
-(BOOL)titleStyleIsLowerThird;
-(BOOL)titleStyleIsSideBySide;
@end

