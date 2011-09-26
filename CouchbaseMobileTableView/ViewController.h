//
//  ViewController.h
//  CouchbaseMobileTableView
//
//  Created by Mick Thompson on 9/18/11.
//  Copyright (c) 2011 DavidMichaelThompson.com. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <CouchCocoa/CouchUITableSource.h>
@class CouchDatabase, CouchPersistentReplication;


@interface ViewController : UIViewController <CouchUITableDelegate, UITextFieldDelegate>
{
    CouchDatabase *database;
    NSURL* remoteSyncURL;
    CouchPersistentReplication* _pull;
    CouchPersistentReplication* _push;
    
    UITableView *tableView;
    IBOutlet UIProgressView *progress;
    BOOL showingSyncButton;
    IBOutlet UITextField *addItemTextField;
    IBOutlet UIImageView *addItemBackground;
}

@property(nonatomic, retain) IBOutlet UITableView *tableView;
@property(nonatomic, retain) IBOutlet CouchUITableSource *dataSource;

-(void)useDatabase:(CouchDatabase*)theDatabase;

- (IBAction)configureSync:(id)sender;
- (IBAction) deleteCheckedItems:(id)sender;

@end
