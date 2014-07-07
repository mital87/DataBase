/********************************************************************************\
 *
 * File Name       Database.h
 * Author          $Author:: gaurav.thummar  $: Author of last commit
 * Version         $Revision:: 03             $: Revision of last commit
 * Modified        $Date:: 2012-08-24 14:28:19#$: Date of last commit
 * 
 * Copyright(c) 2012 IndiaNIC.com. All rights reserved.
 *
 \********************************************************************************/

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface Database : NSObject {

	sqlite3 *databaseObj;

}
+(Database*) shareDatabase;

-(BOOL) createEditableCopyOfDatabaseIfNeeded;
-(NSString *) GetDatabasePath:(NSString *)dbName;

-(void)CreateTable:(NSString *)query;
-(NSMutableArray *)SelectAllFromTable:(NSString *)query;
-(int)getCount:(NSString *)query;
-(BOOL)CheckForRecord:(NSString *)query;
-(void)Insert:(NSString *)query;
-(void)Delete:(NSString *)query;
-(void)Update:(NSString *)query;
-(void)Alter:(NSString *)query;
-(void)DropTable:(NSString *)query;
-(BOOL)CheckColumnExists:(NSString *)query;
-(int)GetSum:(NSString*)query;
@end
