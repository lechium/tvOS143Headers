/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseArchiver.h>

@interface IMAbstractDatabaseTrimmer : IMAbstractDatabaseArchiver
-(BOOL)copyDatabase:(/*^block*/id)arg1 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
-(BOOL)trimDatabaseWithOperation:(IMDSqlOperation*)arg1 ;
@end
